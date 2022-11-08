---
xmarp: true
theme: gaia
_class: lead
paginate: true
backgroundColor: #fff
backgroundImage: url('https://marp.app/assets/hero-background.svg')
---

![bg left fit](http://graphics.stanford.edu/courses/cs348c/images/pixar_8999674.jpg)

# **Introduction to Graphics Libraries**
## ...

https://talks.obedmr.com/


---

## 2 types of Computer Graphics Software

- Special-purpose packages
  - For nonprogrammers
  - To generate pictures, graphs or charts
  - Without worrying about the programming
- General programming packages
  - Libraries and graphics functions
  - Typical functions: points, straight lines, polygons, spheres, ...
  - Programmable color values, view of scene, rotations, transformations, ...

---

## Quick questions

### ... about Graphics Software

- Could you list some special-purpose graphics packages?

- Could you list some general programminge packages?

![bg fit right](./images/question-marks.png)

---


## Coordinates Representations

![bg 75%](./images/coordinates_representations.png)


----

## Graphics functions

- Primitives
- Attributes
- Geometric transformations
- Modeling transformations
- Viewing transformations
- Input functions

---


## Libraries and APIs

- Graphical Kernel System (GKS) - 1984
  - Initially, a 2-dimensional graphics package
- Programmer’s Hierarchical Interactive Graphics System (PHIGS)
  - Hierarchical object modeling, color specifications, surface rendering, and picture manipulations
- GL - Graphics Library (Silicon Graphics Inc.)
  - Used in the first graphics workstations
- OpenGL - a hardware independent version of GL (1990)

---


## Our first program in OpenGL - intro

- *Computer Graphics with OpenGL* _by Hearn, Baker and Carithers_
  - Chapter 2, sections 5

---


## Our first program in OpenGL - Setup

- First, let's install OpenGL
  - Linux (Debian-based)
    ```
    sudo apt-get install freeglut3-dev
    ```
  - Windows
    - http://graphx-opengl-win.obedmr.com
  - MacOS
    - http://graphx-opengl-mac.obedmr.com

---

## Our first program in OpenGL - Challange

- Go to http://graphx-chlg1.obedmr.com and read about line drawing algorithms
- Create a program with OpenGL that:
  - Given 2 points in the format `(x, y)`,
  - develop a function `myLine` that will generate a list points that will represent a line
  - and then will draw them in the screen with the `glVertex2i` function
- You can take a look on [./src/hello-OpenGL.cpp](./src/hello-OpenGL.cpp)

---

## Events


---


## User Interface


---


## Data types


---


## Projections


---


## Primitives


---

# Resources and Credits
This material is genereated thanks to some extracts from following resources:

- [Introduction to Parallel Computing](https://computing.llnl.gov/tutorials/parallel_comp),  _Blaise Barney, Lawrence Livermore National Laboratory_
- Patterns for Parallel Programming - _Berna_ _L_ _Massingill,_  _Beverly A. Sanders, Timothy G. Mattson_
- The Linux Programming Interface (Chapters 29, 30, 31, 32) - _Michael Kerrisk_
- The C Programming Language - _Brian W. Kernighan_


---

# Thanks

- **Obed N Muñoz Reynoso**
	- Cloud Software Engineer
	- obed.n.munoz@``gmail | tec | intel``.com
