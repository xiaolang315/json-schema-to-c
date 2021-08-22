use std::fs::File;
use std::process::Command;

fn main() {
    let mut echo_hello = Command::new("sh");
    let ret = echo_hello.arg("-c").arg("ls").output();
    println!("结果：{:?}",ret);
    let file = File::open( "./src/schema.json").unwrap();
    println!("文件打开成功：{:?}",file);
}

#[test]
fn test(){

}