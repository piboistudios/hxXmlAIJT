// Prototyping regex formatting for resulting Xml Dataset
using StringTools;
class Test {
    static var openXRegEx = ~/(<([^\/])[^<>]+>|<[\/][^<>]+>)/gi;
    static var closeXRegEx = ~/(<[\/][^<>]+>)/gi;
    static function indentAll(string:String, index = 0)
    {
        var sip = new haxe.io.StringInput(string), line = "", returnString = "";
        while(
            (try{
                line = sip.readLine();
            }
            catch(e:haxe.io.Eof)
            {
                line = "EOF";
            }) != "EOF")
            {
                trace(line);
                returnString = string.replace(line, "BBB" + line);
                
            }
       	
        return returnString;

    }
    static public function tryMatched(regex:EReg, index:Int)
    {
        
    }

    static public function main()
    {
        var xData = ~/\n/gi.replace('<Query><XmlData><JT><jr index="0" PK="124159
        "/><jr index="1" PK="145555
        "/></JT></XmlData></Query>',"");

        // closeXRegEx.match(xData);
        var rightOfMatch = xData;
        while(
            (try
        {
            openXRegEx.match(rightOfMatch);
            rightOfMatch =  openXRegEx.matchedRight();
        }
        catch(E:Dynamic)
        {
            
            rightOfMatch = "EOF";
            
        }) != "EOF")
        {
            trace(rightOfMatch);
            if(rightOfMatch.length < 1) break;
            var r = ~/</gi;
            r.match(rightOfMatch);
            xData = xData.replace(rightOfMatch, r.replace(rightOfMatch, "\n\t" + r.matched(0)));
            r = ~/>/gi;
            r.match(rightOfMatch);
            xData = xData.replace(rightOfMatch, r.replace(rightOfMatch, "\n\t" + r.matched(0)));
            
        }
        var out = sys.io.File.write("out.txt");
        out.writeString(xData);
        out.close();
        
        

        // trace("Temp:\n" + temp);

    }
}