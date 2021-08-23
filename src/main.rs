// use std::process::Command;
use std::fs::read_to_string;
use std::fs::write;
use serde_json::from_str;
use serde_json::{Value};

fn make_str(body:String)->String {
    let head = String::from(r#"
#ifdef __cplusplus
extern "C" {
#endif "#);
    let tail = String::from(r#"
#ifdef __cplusplus
}
#endif 

"#);
    return head + &body + &tail;
}

fn main() {
    // let mut echo_hello = Command::new("sh");
    // let ret = echo_hello.arg("-c").arg("ls").output();
    // println!("结果：{:?}",ret);
    // let file = File::open( "./src/schema.json").unwrap();
    // println!("文件打开成功：{:?}",file);

    let contents:String = read_to_string("./src/schema.json").unwrap();
    let v: Value = from_str(&contents).unwrap();

    println!("Please call {} at the number {}", v["type"], v["id"]);

    let body = String::from(r#"

typedef struct All{
    char name[100];
    int value;
}All ;

All parser_print(const char* str);

    "#);
    
    write("./src/demo.h", make_str(body))
        .unwrap();
}

#[test]
fn test(){

}