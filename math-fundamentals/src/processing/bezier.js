function setup() {
    createCanvas(600, 600);
}

var events = 0;

var p1X = 0;
var p1Y = 0;

function draw() {
    background(255)
    fill(0)
    switch(events){
    case 1:
	p1X = mouseX
	p1Y = mouseY
	circle(p1X, p1Y, 5)
	events++
	break
    case 2:
	circle(p1X, p1Y, 5)
	line(p1X, p1Y, mouseX, mouseY)
	break
    default:
	events = 0
    }
}

function mousePressed() {
    events++
}
