// Generated by Haxe 3.4.7

#pragma warning disable 109, 114, 219, 429, 168, 162
namespace fileFactory {
	public class CSV : global::haxe.lang.HxObject {
		
		public CSV(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public CSV() {
			global::fileFactory.CSV.__hx_ctor_fileFactory_CSV(this);
		}
		
		
		public static void __hx_ctor_fileFactory_CSV(global::fileFactory.CSV __hx_this) {
		}
		
		
		public static global::Array run(object input) {
			object _file = null;
			global::Array @out = new global::Array<object>();
			if (global::haxe.lang.Runtime.refEq(global::Type.getClass<object>(((object) (input) )), typeof(string))) {
				_file = global::sys.io.File.read(global::haxe.lang.Runtime.toString(input), default(global::haxe.lang.Null<bool>));
			}
			
			global::sys.io.FileInput file = ((global::sys.io.FileInput) (_file) );
			while (true) {
				string pk = global::fileFactory.InputTools.tryReadLine(file);
				if (string.Equals(pk, global::fileFactory.Common.EOF)) {
					return @out;
				}
				
				global::haxe.lang.Runtime.callField(@out, "push", 1247875546, new global::Array<object>(new object[]{pk}));
			}
			
			return null;
		}
		
		
	}
}


