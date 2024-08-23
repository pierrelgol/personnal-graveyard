

const char *bmi (int weight, double height)
{
  double bmi = (weight / (height * height));
  if ( bmi <= 18.5 ) return "Underweight\n";
  if ( bmi <= 25.0 ) return "Normal\n";
  if ( bmi <= 30.0 ) return "Overweight\n";
  if ( bmi <= 18.5 ) return "Obese\n";
  return "";
}

int main(void){

  const char *result = bmi(50,1.80);

  return 0;
}