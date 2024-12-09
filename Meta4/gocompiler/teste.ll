@.str_int = private unnamed_addr constant [4 x i8] c"%d\0A\00"
@.str_float = private unnamed_addr constant [7 x i8] c"%.08F\0A\00"
@.str_true = private unnamed_addr constant [6 x i8] c"true\0A\00"
@.str_false = private unnamed_addr constant [7 x i8] c"false\0A\00"
@.str_string = private unnamed_addr constant [4 x i8] c"%s\0A\00"
@.empty_str = private unnamed_addr constant [1 x i8] c"\00"

declare i32 @atoi(i8*)
declare i32 @printf(i8*, ...)
@logic_result = global i1 false



@a = global i32 0
@f = global double 0.0
@g = global double 0.0
define void @_main() {
  %i = alloca i32
  %counter = alloca i32
  %1 = add i32 0, 0
  store i32 %1, i32* %i
  %2 = add i32 0, 0
  store i32 %2, i32* %counter
  %3 = alloca i32
  store i32 0, i32* %3
  br label %L3for_cond
L3for_cond:
  %4 = load i32, i32* %i
  %5 = add i32 14, 0
  %6 = icmp slt i32 %4, %5
  %7 = icmp ne i1 %6, 0
  br i1 %7, label %L3body, label %L3end
L3body:
  %8 = alloca i32
  %9 = load i32, i32* %i
  %10 = add i32 0, 0
  %11 = icmp eq i32 %9, %10
  %12 = icmp ne i1 %11, 0
  br i1 %12, label %L8then, label %L8else
L8then:
  %13 = add i32 1, 0
  store i32 %13, i32* %counter
  %14 = load i32, i32* %counter
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str_int, i32 0, i32 0), i32 %14)
  br label %L8end
L8else:
  %16 = load i32, i32* %counter
  %17 = add i32 2, 0
  %18 = mul i32 %16, %17
  store i32 %18, i32* %counter
  %19 = load i32, i32* %counter
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str_int, i32 0, i32 0), i32 %19)
  br label %L8end
L8end:
  %21 = load i32, i32* %8
  %22 = load i32, i32* %i
  %23 = add i32 1, 0
  %24 = add i32 %22, %23
  store i32 %24, i32* %i
  br label %L3for_cond
L3end:
  %25 = load i32, i32* %3
  %26 = fadd double 12324453.13451345, 0.0
  %27 = fsub double -0.0, %26
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @.str_float, i32 0, i32 0), double %27)
  %29 = alloca [4 x i8]
  store [4 x i8] c"ola\00", [4 x i8]* %29
  %ptr30 = getelementptr inbounds [4 x i8], [4 x i8]* %29, i32 0, i32 0
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str_string, i32 0, i32 0), i8* %ptr30)
  %31 = alloca [6 x i8]
  store [6 x i8] c"o\09l\0Aa\00", [6 x i8]* %31
  %ptr32 = getelementptr inbounds [6 x i8], [6 x i8]* %31, i32 0, i32 0
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str_string, i32 0, i32 0), i8* %ptr32)
  ret void
}

define i32 @_factorial() {
  %b = alloca i32
  %c = alloca i32
  %e = alloca i1
  %d = alloca i1
  %1 = load i32, i32* @a
  %2 = load i32, i32* %b
  %3 = add i32 %1, %2
  store i32 %3, i32* %c
  %4 = load i1, i1* %d
  %5 = xor i1 %4, 1
  store i1 %5, i1* %e
  %6 = load double, double* @g
  store double %6, double* @f
  %7 = add i32 1, 0
  %8 = sub i32 0, %7
  store i32 %8, i32* %b
  %9 = add i32 2, 0
  %10 = add i32 %9, 0
  store i32 %10, i32* %c
  %11 = load i32, i32* @a
  ret i32 %11
}

define i32 @main() {
  call void @_main()
  ret i32 0
}
