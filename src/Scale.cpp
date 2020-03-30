//
// Created by abdel on 30/03/2020.
//

#include "Scale.h"

Scale::Scale(glm::vec3 scale) : scalation(scale) {
    matTG = glm::scale(glm::mat4(1.0f), scale);
}

Scale::Scale(float esc) {
    escala = esc;
    matTG = glm::scale(glm::mat4(1.0f), glm::vec3(esc, esc, esc));
}


Scale::~Scale() {
}