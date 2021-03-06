/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#include "utils.h"
#include "index.h"
#include "VkBufferCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkBufferCreateInfo::constructor;

_VkBufferCreateInfo::_VkBufferCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
}

_VkBufferCreateInfo::~_VkBufferCreateInfo() {
  //printf("VkBufferCreateInfo deconstructed!!\n");
}

void _VkBufferCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkBufferCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkBufferCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("size").ToLocalChecked(), Getsize, Setsize, ctor);
  SetPrototypeAccessor(proto, Nan::New("usage").ToLocalChecked(), Getusage, Setusage, ctor);
  SetPrototypeAccessor(proto, Nan::New("sharingMode").ToLocalChecked(), GetsharingMode, SetsharingMode, ctor);
  SetPrototypeAccessor(proto, Nan::New("queueFamilyIndexCount").ToLocalChecked(), GetqueueFamilyIndexCount, SetqueueFamilyIndexCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pQueueFamilyIndices").ToLocalChecked(), GetpQueueFamilyIndices, SetpQueueFamilyIndices, ctor);
  Nan::Set(target, Nan::New("VkBufferCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkBufferCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkBufferCreateInfo* self = new _VkBufferCreateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = info[0]->ToObject();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("size").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("usage").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("sharingMode").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("queueFamilyIndexCount").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("pQueueFamilyIndices").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      if (obj->Has(sAccess7)) info.This()->Set(sAccess7, obj->Get(sAccess7));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkBufferCreateInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkBufferCreateInfo::GetsType) {
  _VkBufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkBufferCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkBufferCreateInfo::SetsType) {
  _VkBufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkBufferCreateInfo>(info.This());
  self->instance.sType = static_cast<VkStructureType>((int32_t)value->NumberValue());
}// flags
NAN_GETTER(_VkBufferCreateInfo::Getflags) {
  _VkBufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkBufferCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkBufferCreateInfo::Setflags) {
  _VkBufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkBufferCreateInfo>(info.This());
  self->instance.flags = static_cast<VkBufferCreateFlags>((int32_t)value->NumberValue());
}// size
NAN_GETTER(_VkBufferCreateInfo::Getsize) {
  _VkBufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkBufferCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.size));
}NAN_SETTER(_VkBufferCreateInfo::Setsize) {
  _VkBufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkBufferCreateInfo>(info.This());
  self->instance.size = static_cast<uint64_t>(value->NumberValue());
}// usage
NAN_GETTER(_VkBufferCreateInfo::Getusage) {
  _VkBufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkBufferCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.usage));
}NAN_SETTER(_VkBufferCreateInfo::Setusage) {
  _VkBufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkBufferCreateInfo>(info.This());
  self->instance.usage = static_cast<VkBufferUsageFlags>((int32_t)value->NumberValue());
}// sharingMode
NAN_GETTER(_VkBufferCreateInfo::GetsharingMode) {
  _VkBufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkBufferCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sharingMode));
}NAN_SETTER(_VkBufferCreateInfo::SetsharingMode) {
  _VkBufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkBufferCreateInfo>(info.This());
  self->instance.sharingMode = static_cast<VkSharingMode>((int32_t)value->NumberValue());
}// queueFamilyIndexCount
NAN_GETTER(_VkBufferCreateInfo::GetqueueFamilyIndexCount) {
  _VkBufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkBufferCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.queueFamilyIndexCount));
}NAN_SETTER(_VkBufferCreateInfo::SetqueueFamilyIndexCount) {
  _VkBufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkBufferCreateInfo>(info.This());
  self->instance.queueFamilyIndexCount = static_cast<uint32_t>(value->NumberValue());
}// pQueueFamilyIndices
NAN_GETTER(_VkBufferCreateInfo::GetpQueueFamilyIndices) {
  _VkBufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkBufferCreateInfo>(info.This());
  if (self->pQueueFamilyIndices.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pQueueFamilyIndices);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkBufferCreateInfo::SetpQueueFamilyIndices) {
  _VkBufferCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkBufferCreateInfo>(info.This());
  
    // js
    if (value->IsArray() || value->IsArrayBufferView()) {
      v8::Handle<v8::Array> arr = v8::Handle<v8::Array>::Cast(value);
      Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> obj(arr);
      self->pQueueFamilyIndices = obj;
    } else {
      if (!self->pQueueFamilyIndices.IsEmpty()) self->pQueueFamilyIndices.Empty();
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pQueueFamilyIndices = getTypedArrayData<uint32_t>(value->ToObject(), nullptr);
  } else {
    self->instance.pQueueFamilyIndices = nullptr;
  }
}