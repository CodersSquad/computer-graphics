---
xmarp: true
theme: gaia
_class: lead
paginate: true
backgroundColor: #fff
backgroundImage: url('https://marp.app/assets/hero-background.svg')
---

![bg left fit](https://ik.imgkit.net/3vlqs5axxjf/PCWW/uploadedImages/Articles/Opinion/2020/April/digital-transformation-hotels.jpg)

# **Math Fundamentals**
## Transformations

https://talks.obedmr.com/

---

## Translation

To translate a 2D position, we add **translation distancies** _tx_ and _ty_ to the original coordinates _x,y_ to obtain the new coordinate position _(x', y')_

![auto](images/translation_form1.png)
![bg fit right](./images/translation1.png)

---

Translation distance pair _(tx, ty)_, is called **translation vector** or **shift vector**

![auto](images/translation_form2.png)

In matrix form:

![auto](images/translation_form3.png)

![bg contain right:55%](images/translation2.png)

---

### Translation in code ([processing](./src/base.js))

```
class wcPt2D {
  public:
  GLfloat x, y;
};

void translatePolygon (wcPt2D * verts, GLint nVerts, GLfloat tx, GLfloat ty) {
  GLint k;
  for (k = 0; k < nVerts; k++) {
    verts [k].x = verts [k].x + tx;
    verts [k].y = verts [k].y + ty;
  }
  glBegin (GL_POLYGON);
    for (k = 0; k < nVerts; k++)
      glVertex2f (verts [k].x, verts [k].y);
  glEnd ( );
}
```

---

## Rotation

We generate a **rotation** transformation of an object by specifying a rotation axis and a **rotation angle**.

![auto](images/rotation_form1.png)
![bg auto right](./images/rotation1.png)

---

With column-vector representation:

![auto](images/rotation_form2.png)

where rotation matrix is:

![auto](images/rotation_form3.png)


Rotation of a point about an arbitrary pivot:

![auto](images/rotation_form4.png)

![bg auto right:30%](./images/rotation2.png)

---

### Rotation in code ([processing](./src/base.js))

```
void rotatePolygon (wcPt2D * verts, GLint nVerts, wcPt2D pivPt, GLdouble theta) {
  wcPt2D * vertsRot;
  GLint k;
  for (k = 0; k < nVerts; k++) {
    vertsRot [k].x = pivPt.x + (verts [k].x - pivPt.x) * cos (theta)
    - (verts [k].y - pivPt.y) * sin (theta);
    vertsRot [k].y = pivPt.y + (verts [k].x - pivPt.x) * sin (theta)
    + (verts [k].y - pivPt.y) * cos (theta);
  }
  glBegin {GL_POLYGON};
    for (k = 0; k < nVerts; k++)
      glVertex2f (vertsRot [k].x, vertsRot [k].y);
  glEnd ( );
}
```

---


## Scaling

To alter the size of an object, we apply a **scaling** transformation.

![auto](images/scaling_form1.png)
![bg auto right:40%](./images/scaling1.png)

In matrix form:

![auto](images/scaling_form2.png)

---

We can control the location of a scaled object by choosing a position, called the **fixed point**, that is to remain unchanged after the scaling transformation.

![auto](images/scaling_form3.png)

![bg auto right](./images/scaling2.png)

---

### Scaling in code ([processing](./src/base.js))

```
void scalePolygon (wcPt2D * verts, GLint nVerts, wcPt2D fixedPt, GLfloat sx, GLfloat sy)
{
  wcPt2D vertsNew;
  GLint k;
  for (k = 0; k < nVerts; k++) {
    vertsNew [k].x = verts [k].x * sx + fixedPt.x * (1 - sx);
    vertsNew [k].y = verts [k].y * sy + fixedPt.y * (1 - sy);
  }
  glBegin {GL_POLYGON};
    for (k = 0; k < nVerts; k++)
      glVertex2f (vertsNew [k].x, vertsNew [k].y);
  glEnd ( );
}
```

---


# Challenge: More transformations

Implement the **Reflection** (choose the one you like), **ShearX** and **ShearY** transformations

![bg auto right](images/reflection.png)

----

![bg vertical contain](images/shearx.png)
![bg contain](images/sheary.png)


---

# What'next?

### Curves
### Surfaces
### Views
### Projections


---

# Resources and Credits
This material is genereated thanks to some extracts from following resources:

- **Computer Graphics with OpenGL** (Chapter 6) by _Donald D. Hearn/M. Pauline Baker, Warren Carithers_, 4th Edition


---

# Thanks

- **Obed N Muñoz Reynoso**
	- Cloud Software Engineer
	- obed.n.munoz@``gmail | tec | intel``.com
