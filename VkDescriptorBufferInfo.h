/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#ifndef __VK_VKDESCRIPTORBUFFERINFO_H__
#define __VK_VKDESCRIPTORBUFFERINFO_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkDescriptorBufferInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> buffer;
      static NAN_GETTER(Getbuffer);
    static NAN_SETTER(Setbuffer);
    
    static NAN_GETTER(Getoffset);
    static NAN_SETTER(Setoffset);
    
    static NAN_GETTER(Getrange);
    static NAN_SETTER(Setrange);
    

    // real instance
    VkDescriptorBufferInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkDescriptorBufferInfo();
    ~_VkDescriptorBufferInfo();

};

#endif