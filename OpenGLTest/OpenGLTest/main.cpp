//
//  main.cpp
//  OpenGLTest
//
//  Created by 王虹 on 2019/8/29.
//  Copyright © 2019年 fw. All rights reserved.
//
//仅用于测试，代码直接往上拷贝，只修改了个头文件
#include <GLUT/GLUT.h>
void myDisplay(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glRectf(-0.5f, -0.5f, 0.5f, 0.5f);
    glFlush();
}
int main(int argc, char *argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(400, 400);
    glutCreateWindow("第一个 OpenGL 程序");
    glutDisplayFunc(&myDisplay);
    glutMainLoop();
    return 0;
}

