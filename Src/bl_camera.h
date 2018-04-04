#ifndef BL_CAMERA_H
#define BL_CAMERA_H

#include "Windows.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define BL_CAM_TOP 0
#define BL_CAM_FPP 1

#ifndef M_PI
#    define M_PI 3.14159265358979323846
#endif

#define degreesToRadians(angleDegrees) ((angleDegrees) * M_PI / 180.0)
#define radiansToDegrees(angleRadians) ((angleRadians) * 180.0 / M_PI)

typedef struct{
	double X,Y,Z;
} bl_CameraPosition;


typedef struct{
	bl_CameraPosition Position;
	bl_CameraPosition LookAt;
	float yaw, pitch, strafe_x, strafe_y;
	int Mode;
} bl_Camera;



bl_Camera *CreateCamera(bl_CameraPosition CameraPosition,  int mode);
bl_CameraPosition CreateCameraPosition(float x, float y, float z);
void bl_CameraInfo(bl_Camera *camera);
void bl_CameraUpdate(bl_Camera *camera);
void bl_CameraRotatePitch(bl_Camera *camera, float angle);
void bl_CameraRotateYaw(bl_Camera *camera, float angle);


#endif