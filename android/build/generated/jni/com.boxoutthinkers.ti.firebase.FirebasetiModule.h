/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include <jni.h>

#include "Proxy.h"

		namespace com {
		namespace boxoutthinkers {
		namespace ti {
		namespace firebase {


class FirebasetiModule : public titanium::Proxy
{
public:
	explicit FirebasetiModule(jobject javaObject);

	static void bindProxy(v8::Handle<v8::Object> exports);
	static v8::Handle<v8::FunctionTemplate> getProxyTemplate();
	static void dispose();

	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static jclass javaClass;

private:
	// Methods -----------------------------------------------------------
	static v8::Handle<v8::Value> registerCallbacks(const v8::Arguments&);
	static v8::Handle<v8::Value> callThisCallbackDirectly(const v8::Arguments&);
	static v8::Handle<v8::Value> remove(const v8::Arguments&);
	static v8::Handle<v8::Value> getData(const v8::Arguments&);
	static v8::Handle<v8::Value> signalEvent(const v8::Arguments&);
	static v8::Handle<v8::Value> childListener(const v8::Arguments&);
	static v8::Handle<v8::Value> init(const v8::Arguments&);
	static v8::Handle<v8::Value> singleValueListener(const v8::Arguments&);
	static v8::Handle<v8::Value> setValue(const v8::Arguments&);
	static v8::Handle<v8::Value> push(const v8::Arguments&);
	static v8::Handle<v8::Value> updateChildren(const v8::Arguments&);
	static v8::Handle<v8::Value> valueListener(const v8::Arguments&);

	// Dynamic property accessors ----------------------------------------

};

		} // firebase
		} // ti
		} // boxoutthinkers
		} // com
