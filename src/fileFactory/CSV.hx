package fileFactory;
import fileFactory.Common;
import sys.io.FileInput;
using fileFactory.InputTools;
class CSV {
    static public function run(input:Dynamic):Array<Dynamic>
    {
        var _file:Dynamic = null, out:Array<Dynamic> = new Array<Dynamic>();
        if(Type.getClass(input) == String)
        {
            _file = sys.io.File.read(input);
        }
        var file:FileInput = _file;

        
        while(true)
        {
            var pk = file.tryReadLine();
            if(pk == Common.EOF)
            {
                
                return out;
            }
            out.push(pk);
        }
        return out;
    }
}