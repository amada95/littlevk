#version 450

vec2 positions[3] = vec2[] (
    vec2(0.0, -0.25),
    vec2(0.25, 0.25),
    vec2(-0.25, 0.25)
);

void main() {
    gl_Position = vec4(positions[gl_VertexIndex], 0.0, 1.0);
}