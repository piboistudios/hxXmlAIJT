import fileFactory.CSV;

class Main {
    static public function main() {
        if(Sys.args().length == 0) return;
        var out = sys.io.File.write("out.xml");
        out.writeString
        (
            HxXmlAIJT.run(CSV.run(Sys.args()[0]))
            .toString()
        );
        out.close();
    }
}