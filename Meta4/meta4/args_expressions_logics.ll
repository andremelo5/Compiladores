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
  %9 = alloca [19 x i8]
  store [19 x i8] c"a==a&&b==b result:\00", [19 x i8]* %9
  %ptr10 = getelementptr inbounds [19 x i8], [19 x i8]* %9, i32 0, i32 0
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str_string, i32 0, i32 0), i8* %ptr10)
  %11 = load i32, i32* %argument1
  %12 = load i32, i32* %argument1
  %13 = icmp eq i32 %11, %12
  %14 = load i32, i32* %argument2
  %15 = load i32, i32* %argument2
  %16 = icmp eq i32 %14, %15
  %17 = and i1 %13, %16
  br i1 %17, label %L18true, label %L18false
L18true:
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @.str_true, i32 0, i32 0))
  br label %L18end
L18false:
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @.str_false, i32 0, i32 0))
  br label %L18end
L18end:
  %20 = alloca [19 x i8]
  store [19 x i8] c"a==a||b!=b result:\00", [19 x i8]* %20
  %ptr21 = getelementptr inbounds [19 x i8], [19 x i8]* %20, i32 0, i32 0
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str_string, i32 0, i32 0), i8* %ptr21)
  %22 = load i32, i32* %argument1
  %23 = load i32, i32* %argument1
  %24 = icmp eq i32 %22, %23
  %25 = load i32, i32* %argument2
  %26 = load i32, i32* %argument2
  %27 = icmp ne i32 %25, %26
  %28 = or i1 %24, %27
  br i1 %28, label %L29true, label %L29false
L29true:
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @.str_true, i32 0, i32 0))
  br label %L29end
L29false:
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @.str_false, i32 0, i32 0))
  br label %L29end
L29end:
  %31 = alloca [16 x i8]
  store [16 x i8] c"!(a==a) result:\00", [16 x i8]* %31
  %ptr32 = getelementptr inbounds [16 x i8], [16 x i8]* %31, i32 0, i32 0
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str_string, i32 0, i32 0), i8* %ptr32)
  %33 = load i32, i32* %argument1
  %34 = load i32, i32* %argument1
  %35 = icmp eq i32 %33, %34
  %36 = xor i1 %35, 1
  br i1 %36, label %L37true, label %L37false
L37true:
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @.str_true, i32 0, i32 0))
  br label %L37end
L37false:
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @.str_false, i32 0, i32 0))
  br label %L37end
L37end:
  %39 = alloca [16 x i8]
  store [16 x i8] c"!(b==a) result:\00", [16 x i8]* %39
  %ptr40 = getelementptr inbounds [16 x i8], [16 x i8]* %39, i32 0, i32 0
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str_string, i32 0, i32 0), i8* %ptr40)
  %41 = load i32, i32* %argument2
  %42 = load i32, i32* %argument1
  %43 = icmp eq i32 %41, %42
  %44 = xor i1 %43, 1
  br i1 %44, label %L45true, label %L45false
L45true:
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @.str_true, i32 0, i32 0))
  br label %L45end
L45false:
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @.str_false, i32 0, i32 0))
  br label %L45end
L45end:
  ret void
}

define i32 @main(i32 %argc, i8** %argv) {
  call void @_main(i32 %argc, i8** %argv)
  ret i32 0
}
