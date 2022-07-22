#ifndef WIDGET_H
#define WIDGET_H

#ifdef __APPLE__
/* Defined before OpenGL and GLUT includes to avoid deprecation messages */
#define GL_SILENCE_DEPRECATION
#endif

#include <QtOpenGL>
#include <QtOpenGLWidgets>

class Widget : public QOpenGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

protected:
    void initializeGL( ) override;
    void paintGL( ) override;
    void resizeGL(int w, int h) override;

private:
    int rotation;
    GLboolean drawInOrtho;
};
#endif // WIDGET_H
