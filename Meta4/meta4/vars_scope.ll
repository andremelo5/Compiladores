@.str_int = private unnamed_addr constant [4 x i8] c"%d\0A\00"
@.str_float = private unnamed_addr constant [7 x i8] c"%.08F\0A\00"
@.str_true = private unnamed_addr constant [6 x i8] c"true\0A\00"
@.str_false = private unnamed_addr constant [7 x i8] c"false\0A\00"
@.str_string = private unnamed_addr constant [4 x i8] c"%s\0A\00"
@.empty_str = private unnamed_addr constant [1 x i8] c"\00"

declare i32 @atoi(i8*)
declare i32 @printf(i8*, ...)
@true_or_false = global i1 false



@i = global i32 0
define void @_main(i32 %argc, i8** %argv) {
  %1 = add i32 2, 0
  store i32 %1, i32* @i
  %2 = load i32, i32* @i
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str_int, i32 0, i32 0), i32 %2)
  %i = alloca i32
  %4 = add i32 3, 0
  store i32 %4, i32* %i
  %5 = load i32, i32* %i
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str_int, i32 0, i32 0), i32 %5)
  call void @_test_i_value()
  ret void
}

define void @_test_i_value() {
  %1 = load i32, i32* @i
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str_int, i32 0, i32 0), i32 %1)
  ret void
}

define i32 @main(i32 %argc, i8** %argv) {
  call void @_main(i32 %argc, i8** %argv)
  ret i32 0
}
