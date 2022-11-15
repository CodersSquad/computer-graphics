function setup() {
  createCanvas(640, 480);
}


function myTranslate(x, y) {
  return [x, y];
}

function myRotation(x, y) {
  return [x, y];
}

function myScaling(x, y) {
  return [x, y];
}

function myReflection(x, y) {
  return [x, y];
}

function myShearX(x, y) {
  return [x, y];
}

function myShearY(x, y) {
  return [x, y];
}

function draw() {
  background(102);
  fill(255);
  polygon(width/2, height/2, 100, 6, null);
  fill(1);
  polygon(width/2, height/2, 100, 6, myTranslate, 50, 50);
}

function polygon(x, y, radius, npoints, transform, ...params) {
  let angle = TWO_PI / npoints;
  beginShape();
  for (let a = 0; a < TWO_PI; a += angle) {
    let sx = x + cos(a) * radius;
    let sy = y + sin(a) * radius;
    if (transform != null) {
      [sx, sy] = transform(sx,sy, ...params);
    }
    vertex(sx, sy);
  }
  endShape(CLOSE);
}
