#pragma once

#include <GL/glew.h>
#include <iostream>
#include "../camera/camera.h"
#include "../animate/model.h"

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

class Loader
{
public:
	Loader();
	~Loader();

	GLfloat speed = 0.02f;
	
	//for camera
	GLfloat delta_time = 0.0f;
	GLfloat last_frame = 0.0f;
	GLfloat last_x;
	GLfloat last_y;

	GLboolean mouse_first_in;
	animation_Camera camera;

	//animated model shader
	GLuint shade_model;

	//animation model instances
	Model model_0;
	Model model_1;
	Model model_2;
	Model model_3;

	glm::mat4 MVP;
	glm::mat4 view_matrix;
	glm::mat4 projection_matrix;

	glm::mat4 model_matrix_0;
	glm::mat4 model_matrix_1;
	glm::mat4 model_matrix_2;
	glm::mat4 model_matrix_3;


	
	void init();
	void update(int32_t width, int32_t height);
	void render();
	void playSound();
	
	static GLuint loadImageToTexture(const char* image_path);
	static GLuint loadDDS(const char* image_path, int* w = nullptr, int* h = nullptr);

};