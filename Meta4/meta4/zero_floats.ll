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
  %a = alloca double
  %1 = fadd double 0.0, 0.0
  %2 = fsub double -0.0, %1
  store double %2, double* %a
  %3 = load double, double* %a
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @.str_float, i32 0, i32 0), double %3)
  %5 = load double, double* %a
  %6 = fsub double -0.0, %5
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @.str_float, i32 0, i32 0), double %6)
  %8 = fadd double 0.0, 0.0
  store double %8, double* %a
  %9 = load double, double* %a
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @.str_float, i32 0, i32 0), double %9)
  %11 = load double, double* %a
  %12 = fsub double -0.0, %11
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @.str_float, i32 0, i32 0), double %12)
  %14 = fadd double 0.0, 0.0
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @.str_float, i32 0, i32 0), double %14)
  %16 = fadd double 0.0, 0.0
  %17 = fsub double -0.0, %16
  call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @.str_float, i32 0, i32 0), double %17)
  ret void
}

define i32 @main(i32 %argc, i8** %argv) {
  call void @_main(i32 %argc, i8** %argv)
  ret i32 0
}
