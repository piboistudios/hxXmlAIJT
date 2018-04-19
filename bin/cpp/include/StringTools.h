// Generated by Haxe 3.4.7
#ifndef INCLUDED_StringTools
#define INCLUDED_StringTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(StringTools)



class HXCPP_CLASS_ATTRIBUTES StringTools_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef StringTools_obj OBJ_;
		StringTools_obj();

	public:
		enum { _hx_ClassId = 0x0363db6a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="StringTools")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"StringTools"); }

		hx::ObjectPtr< StringTools_obj > __new() {
			hx::ObjectPtr< StringTools_obj > __this = new StringTools_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< StringTools_obj > __alloc(hx::Ctx *_hx_ctx) {
			StringTools_obj *__this = (StringTools_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(StringTools_obj), false, "StringTools"));
			*(void **)__this = StringTools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StringTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("StringTools","\x6a","\xdb","\x63","\x03"); }

		static ::String htmlEscape(::String s, ::Dynamic quotes);
		static ::Dynamic htmlEscape_dyn();

		static bool isSpace(::String s,int pos);
		static ::Dynamic isSpace_dyn();

		static ::String ltrim(::String s);
		static ::Dynamic ltrim_dyn();

		static ::String rtrim(::String s);
		static ::Dynamic rtrim_dyn();

		static ::String trim(::String s);
		static ::Dynamic trim_dyn();

};


#endif /* INCLUDED_StringTools */ 
