#pragma once

#include <cstdint>
#include "../glm/glm.hpp"

class CShader {
public:
    // Constructor/Destructor
    CShader(const char* _sVertex, const char* _sFragment);
    ~CShader();

    // Utils
    uint32_t GetId() const;
    const char* GetError() const;
    void Use() const;
    void SetupAttribs() const;

    // Getters
    int GetLocation(const char* _sName) const; 

    // Setters
    void SetInt(int _iLocation, int _iValue);
    void SetFloat(int _iLocation, float _iValue);
    void SetVec3(int _iLocation, const glm::vec3& _vVector);
    void SetVec4(int _iLocation, const glm::vec4& _vVector);
    void SetMatrix(int _iLocation, const glm::mat4& _mMatrix); 
private:
    uint32_t m_uId;
};
