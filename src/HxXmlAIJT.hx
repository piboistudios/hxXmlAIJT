package;

class HxXmlAIJT {
    static var out:Xml;
    
    static public function genOut()
    {
        out = Xml.createElement("Query");
    }

    static public function convertArray(input:Array<Dynamic>)
    {
        var joinTable = Xml.createElement("JT");
        for(i in 0...input.length)
        {
            var pk:Xml = null;
            (pk = Xml.parse("<jr></jr>").firstElement()).set("index",Std.string(i));
            pk.firstChild().nodeValue = Std.string(input[i]);
            joinTable.addChild(pk);
        }
        var xmlData = null;
        (xmlData = Xml.createElement("XmlData")).addChild(joinTable);
        out.addChild(xmlData);
    }

	static public function run(input:Array<Dynamic>):Xml
    {
        genOut();
        convertArray(input);
        return out;
    }
}