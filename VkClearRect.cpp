/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#include "utils.h"
#include "index.h"
#include "VkClearRect.h"

Nan::Persistent<v8::FunctionTemplate> _VkClearRect::constructor;

_VkClearRect::_VkClearRect() {
  
}

_VkClearRect::~_VkClearRect() {
  //printf("VkClearRect deconstructed!!\n");
}

void _VkClearRect::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkClearRect::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkClearRect").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("rect").ToLocalChecked(), Getrect, Setrect, ctor);
  SetPrototypeAccessor(proto, Nan::New("baseArrayLayer").ToLocalChecked(), GetbaseArrayLayer, SetbaseArrayLayer, ctor);
  SetPrototypeAccessor(proto, Nan::New("layerCount").ToLocalChecked(), GetlayerCount, SetlayerCount, ctor);
  Nan::Set(target, Nan::New("VkClearRect").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkClearRect::New) {
  if (info.IsConstructCall()) {
    _VkClearRect* self = new _VkClearRect();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = info[0]->ToObject();
      v8::Local<v8::String> sAccess0 = Nan::New("rect").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("baseArrayLayer").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("layerCount").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkClearRect constructor cannot be invoked without 'new'");
  }
};

// rect
NAN_GETTER(_VkClearRect::Getrect) {
  _VkClearRect *self = Nan::ObjectWrap::Unwrap<_VkClearRect>(info.This());
  if (self->rect.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->rect);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkClearRect::Setrect) {
  _VkClearRect *self = Nan::ObjectWrap::Unwrap<_VkClearRect>(info.This());
  // js
  if (!(value->IsNull())) {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(value->ToObject());
    self->rect = obj;
  } else {
    //self->rect = Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>>(Nan::Null());
  }
  // vulkan
  if (!(value->IsNull())) {
    _VkRect2D* obj = Nan::ObjectWrap::Unwrap<_VkRect2D>(value->ToObject());
    self->instance.rect = obj->instance;
  } else {
    memset(&self->instance.rect, 0, sizeof(VkRect2D));
  }
}// baseArrayLayer
NAN_GETTER(_VkClearRect::GetbaseArrayLayer) {
  _VkClearRect *self = Nan::ObjectWrap::Unwrap<_VkClearRect>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.baseArrayLayer));
}NAN_SETTER(_VkClearRect::SetbaseArrayLayer) {
  _VkClearRect *self = Nan::ObjectWrap::Unwrap<_VkClearRect>(info.This());
  self->instance.baseArrayLayer = static_cast<uint32_t>(value->NumberValue());
}// layerCount
NAN_GETTER(_VkClearRect::GetlayerCount) {
  _VkClearRect *self = Nan::ObjectWrap::Unwrap<_VkClearRect>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.layerCount));
}NAN_SETTER(_VkClearRect::SetlayerCount) {
  _VkClearRect *self = Nan::ObjectWrap::Unwrap<_VkClearRect>(info.This());
  self->instance.layerCount = static_cast<uint32_t>(value->NumberValue());
}