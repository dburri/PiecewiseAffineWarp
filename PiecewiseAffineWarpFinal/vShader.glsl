attribute vec4 aPosition;
attribute vec2 aST;
attribute vec4 aColor;

varying vec4 vColor;
varying vec2 vST;

void main(void) {
    vColor = aColor;
    vST = aST;
    gl_Position = aPosition;
}
