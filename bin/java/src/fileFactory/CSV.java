// Generated by Haxe 3.4.7
package fileFactory;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class CSV extends haxe.lang.HxObject
{
	public CSV(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public CSV()
	{
		//line 5 "C:\\Haxe Projects\\hxXmlAIJT\\src\\fileFactory\\CSV.hx"
		fileFactory.CSV.__hx_ctor_fileFactory_CSV(this);
	}
	
	
	public static void __hx_ctor_fileFactory_CSV(fileFactory.CSV __hx_this)
	{
	}
	
	
	public static haxe.root.Array run(java.lang.Object input)
	{
		//line 8 "C:\\Haxe Projects\\hxXmlAIJT\\src\\fileFactory\\CSV.hx"
		java.lang.Object _file = null;
		//line 8 "C:\\Haxe Projects\\hxXmlAIJT\\src\\fileFactory\\CSV.hx"
		haxe.root.Array out = new haxe.root.Array();
		//line 9 "C:\\Haxe Projects\\hxXmlAIJT\\src\\fileFactory\\CSV.hx"
		if (( ((java.lang.Object) (((java.lang.Class) (haxe.root.Type.getClass(haxe.lang.Runtime.toString(input))) )) ) == ((java.lang.Object) (java.lang.String.class) ) )) 
		{
			//line 11 "C:\\Haxe Projects\\hxXmlAIJT\\src\\fileFactory\\CSV.hx"
			_file = sys.io.File.read(haxe.lang.Runtime.toString(input), null);
		}
		
		//line 13 "C:\\Haxe Projects\\hxXmlAIJT\\src\\fileFactory\\CSV.hx"
		sys.io.FileInput file = ((sys.io.FileInput) (_file) );
		//line 16 "C:\\Haxe Projects\\hxXmlAIJT\\src\\fileFactory\\CSV.hx"
		while (true)
		{
			//line 18 "C:\\Haxe Projects\\hxXmlAIJT\\src\\fileFactory\\CSV.hx"
			java.lang.String pk = fileFactory.InputTools.tryReadLine(file);
			//line 19 "C:\\Haxe Projects\\hxXmlAIJT\\src\\fileFactory\\CSV.hx"
			if (haxe.lang.Runtime.valEq(pk, fileFactory.Common.EOF)) 
			{
				//line 22 "C:\\Haxe Projects\\hxXmlAIJT\\src\\fileFactory\\CSV.hx"
				return out;
			}
			
			//line 24 "C:\\Haxe Projects\\hxXmlAIJT\\src\\fileFactory\\CSV.hx"
			out.push(pk);
		}
		
	}
	
	
}


