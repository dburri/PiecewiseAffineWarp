varying lowp vec4 vColor;
varying highp vec2 vST;
uniform sampler2D texUnit;

void main(void) {
    highp vec4 color = texture2D(texUnit, vST);
    color = 0.5*color + 0.5*vColor;
    gl_FragColor = color;
    
    //gl_FragColor = vec4(vST.s, vST.t, 0., 1.);
    //gl_FragColor = vColor;

}
