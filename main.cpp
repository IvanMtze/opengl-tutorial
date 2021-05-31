#include <iostream>
#include "display.h"
#include <GL/glew.h>
#include "shader.h"

using namespace std;
int main()
{
    Display display(800,600,"hello world");

    Shader shader("./res/basicShader");
    while(!display.IsClosed()){
        display.Clear(0.0f,0.15f,0.3f,1.0f);
        shader.Bind();

        display.SwapBuffers();

    }
    return 0;
}
