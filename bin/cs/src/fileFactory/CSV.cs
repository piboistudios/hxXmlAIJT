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
			global::sys.io.FileInput file = null;
			if (global::haxe.lang.Runtime.refEq(global::Type.getClass<object>(((object) (input) )), typeof(string))) {
				_file = global::sys.io.File.read(global::haxe.lang.Runtime.toString(input), default(global::haxe.lang.Null<bool>));
				file = ((global::sys.io.FileInput) (_file) );
			}
			
			string pk = "";
			while (true) {
				string tmp = null;
				try {
					pk = file.readLine();
					tmp = pk;
				}
				catch (global::System.Exception __temp_catchallException1){
					global::haxe.lang.Exceptions.exception = __temp_catchallException1;
					object __temp_catchall2 = __temp_catchallException1;
					if (( __temp_catchall2 is global::haxe.lang.HaxeException )) {
						__temp_catchall2 = ((global::haxe.lang.HaxeException) (__temp_catchallException1) ).obj;
					}
					
					if (( __temp_catchall2 is global::haxe.io.Eof )) {
						global::haxe.io.Eof e = ((global::haxe.io.Eof) (__temp_catchall2) );
						{
							pk = global::fileFactory.Common.EOF;
							tmp = pk;
						}
						
					}
					else {
						throw;
					}
					
				}
				
				
				if ( ! (( ! (string.Equals(tmp, global::fileFactory.Common.EOF)) )) ) {
					break;
				}
				
				global::haxe.lang.Runtime.callField(@out, "push", 1247875546, new global::Array<object>(new object[]{pk}));
			}
			
			return @out;
		}
		
		
	}
}


