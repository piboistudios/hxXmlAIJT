// Generated by Haxe 3.4.7
#ifndef INCLUDED_HxXmlAIJT
#define INCLUDED_HxXmlAIJT

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(HxXmlAIJT)
HX_DECLARE_CLASS0(Xml)



class HXCPP_CLASS_ATTRIBUTES HxXmlAIJT_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef HxXmlAIJT_obj OBJ_;
		HxXmlAIJT_obj();

	public:
		enum { _hx_ClassId = 0x5e4757b9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="HxXmlAIJT")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"HxXmlAIJT"); }

		hx::ObjectPtr< HxXmlAIJT_obj > __new() {
			hx::ObjectPtr< HxXmlAIJT_obj > __this = new HxXmlAIJT_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< HxXmlAIJT_obj > __alloc(hx::Ctx *_hx_ctx) {
			HxXmlAIJT_obj *__this = (HxXmlAIJT_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HxXmlAIJT_obj), false, "HxXmlAIJT"));
			*(void **)__this = HxXmlAIJT_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HxXmlAIJT_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("HxXmlAIJT","\xb9","\x57","\x47","\x5e"); }

		static  ::Xml out;
		static void genOut();
		static ::Dynamic genOut_dyn();

		static void convertArray(::cpp::VirtualArray input);
		static ::Dynamic convertArray_dyn();

		static  ::Xml run(::cpp::VirtualArray input);
		static ::Dynamic run_dyn();

};


#endif /* INCLUDED_HxXmlAIJT */ 
