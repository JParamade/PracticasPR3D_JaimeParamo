#include "../Header Files/Shader.h"

// Constructor/Destructor

CShader::CShader(const char* _sVertex, const char* _sFragment) {

}

CShader::~CShader() {

}

// Utils

uint32_t CShader::GetId() const {
    return 0;
}

const char* CShader::GetError() const {
    return nullptr;
}

void CShader::Use() const {

}

void CShader::SetupAttribs() const {

}

// Getters

int CShader::GetLocation(const char* _sName) const {
    return 0;
}

// Setters

void CShader::SetInt(int _iLocation, int _iValue) {

}

void CShader::SetFloat(int _iLocation, float _iValue) {

}

void CShader::SetVec3(int _iLocation, const glm::vec3& _vVector) {

}

void CShader::SetVec4(int _iLocation, const glm::vec4& _vVector) {

}

void CShader::SetMatrix(int _iLocation, const glm::mat4& _mMatrix) {

}
 
