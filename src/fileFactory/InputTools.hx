package fileFactory;
import fileFactory.Common;

class InputTools {
    static public function tryReadUntil(file:sys.io.FileInput, end:Int):String
    {
        try
        {
            return file.readUntil(end);
        }
        catch(e:haxe.io.Eof)
        {
            return Common.EOF;
        }
    }
    static public function tryReadLine(file:sys.io.FileInput):String
    {
        try
        {
            return file.readLine();
        }
        catch(e:haxe.io.Eof)
        {
            return Common.EOF;
        }
    }
}