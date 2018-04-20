package fileFactory;
import fileFactory.Common;
import sys.io.FileInput;
class CSV {
    static public function run(input:Dynamic):Array<Dynamic>
    {
        var _file:Dynamic = null, out:Array<Dynamic> = new Array<Dynamic>();
        var file:FileInput = null;
        if(Type.getClass(input) == String)
        {
            file = _file = sys.io.File.read(input);
        }

        var pk = "";
        while
        (
           ( try
            {
                pk = file.readLine();
            }
            catch(e:haxe.io.Eof)
            {
                pk = Common.EOF;
            }) != Common.EOF
        )
        {
            out.push(pk);
        }
        return out;
    }
}