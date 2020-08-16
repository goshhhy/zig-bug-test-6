const c = @cImport({
    @cInclude("test.h");
});

fn testFromZig() void {
    c.setGlobalVec( 1, 2, 3 );
    c.printVec( c.global_vector );
}

pub fn main() anyerror!void {
    //c.testFromC();
    testFromZig();
}
