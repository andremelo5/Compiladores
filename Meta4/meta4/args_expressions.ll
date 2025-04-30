@.str_int = private unnamed_addr constant [4 x i8] c"%d\0A\00"
@.str_float = private unnamed_addr constant [7 x i8] c"%.08F\0A\00"
@.str_true = private unnamed_addr constant [6 x i8] c"true\0A\00"
@.str_false = private unnamed_addr constant [7 x i8] c"false\0A\00"
@.str_string = private unnamed_addr constant [4 x i8] c"%s\0A\00"
@.empty_str = private unnamed_addr constant [1 x i8] c"\00"

declare i32 @atoi(i8*)
declare i32 @printf(i8*, ...)
@true_or_false = global i1 false



define void @_main(i32 %argc, i8** %argv) {
  %argument1 = alloca i32
  %argument2 = alloca i32
  %1 = add i32 1, 0
  %2 = getelementptr i8*, i8** %argv, i32 %1
  %3 = load i8*, i8** %2
  %4 = call i32 @atoi(i8* %3)
  store i32 %4, i32* %argument1
  %5 = add i32 2, 0
  %6 = getelementptr i8*, i8** %argv, i32 %5
  %7 = load i8*, i8** %6
  %8 = call i32 @atoi(i8* %7)
  store i32 %8, i32* %argument2
  %9 = alloca [12 x i8]
  store [12 x i8] c"a+b result:\00", [12 x i8]* %9
  %ptr10 = getelementptr inbounds [12 x i8], [12 x i8]* %9, i32 0, i32 0
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str_string, i32 0, i32 0), i8* %ptr10)
  %11 = load i32, i32* %argument1
  %12 = load i32, i32* %argument2
  %13 = add i32 %11, %12
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str_int, i32 0, i32 0), i32 %13)
  %15 = alloca [12 x i8]
  store [12 x i8] c"a-b result:\00", [12 x i8]* %15
  %ptr16 = getelementptr inbounds [12 x i8], [12 x i8]* %15, i32 0, i32 0
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str_string, i32 0, i32 0), i8* %ptr16)
  %17 = load i32, i32* %argument1
  %18 = load i32, i32* %argument2
  %19 = sub i32 %17, %18
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str_int, i32 0, i32 0), i32 %19)
  %21 = alloca [12 x i8]
  store [12 x i8] c"a*b result:\00", [12 x i8]* %21
  %ptr22 = getelementptr inbounds [12 x i8], [12 x i8]* %21, i32 0, i32 0
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str_string, i32 0, i32 0), i8* %ptr22)
  %23 = load i32, i32* %argument1
  %24 = load i32, i32* %argument2
  %25 = mul i32 %23, %24
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str_int, i32 0, i32 0), i32 %25)
  %27 = alloca [12 x i8]
  store [12 x i8] c"a/b result:\00", [12 x i8]* %27
  %ptr28 = getelementptr inbounds [12 x i8], [12 x i8]* %27, i32 0, i32 0
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str_string, i32 0, i32 0), i8* %ptr28)
  %29 = load i32, i32* %argument1
  %30 = load i32, i32* %argument2
  %31 = sdiv i32 %29, %30
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str_int, i32 0, i32 0), i32 %31)
  %33 = alloca [12 x i8]
  store [12 x i8] c"a%b result:\00", [12 x i8]* %33
  %ptr34 = getelementptr inbounds [12 x i8], [12 x i8]* %33, i32 0, i32 0
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str_string, i32 0, i32 0), i8* %ptr34)
  %35 = load i32, i32* %argument1
  %36 = load i32, i32* %argument2
  %37 = srem i32 %35, %36
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str_int, i32 0, i32 0), i32 %37)
  %39 = alloca [13 x i8]
  store [13 x i8] c"-a+b result:\00", [13 x i8]* %39
  %ptr40 = getelementptr inbounds [13 x i8], [13 x i8]* %39, i32 0, i32 0
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str_string, i32 0, i32 0), i8* %ptr40)
  %41 = load i32, i32* %argument1
  %42 = sub i32 0, %41
  %43 = load i32, i32* %argument2
  %44 = add i32 %42, %43
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str_int, i32 0, i32 0), i32 %44)
  %46 = alloca [15 x i8]
  store [15 x i8] c"-(b+a) result:\00", [15 x i8]* %46
  %ptr47 = getelementptr inbounds [15 x i8], [15 x i8]* %46, i32 0, i32 0
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str_string, i32 0, i32 0), i8* %ptr47)
  %48 = load i32, i32* %argument2
  %49 = load i32, i32* %argument1
  %50 = add i32 %48, %49
  %51 = sub i32 0, %50
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str_int, i32 0, i32 0), i32 %51)
  ret void
}

define i32 @main(i32 %argc, i8** %argv) {
  call void @_main(i32 %argc, i8** %argv)
  ret i32 0
}
