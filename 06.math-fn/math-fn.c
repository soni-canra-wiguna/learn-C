#include <stdio.h>
#include <math.h>

int main()
{
  // superscript -> ᵃ ᵇ ᶜ ᵈ ᵉ ᶠ ᵍ ʰ ⁱ ʲ ᵏ ˡ ᵐ ⁿ ᵒ ᵖ ʳ ˢ ᵗ ᵘ ᵛ ʷ ˣ ʸ ᶻ
  // superscript number -> ¹ ² ³ ⁴ ⁵ ⁶ ⁷ ⁸ ⁹ ⁰
  // subscript -> ₐ ₑ ₕ ᵢ ⱼ ₖ ₗ ₘ ₙ ₒ ₚ ᵣ ₛ ₜ ᵤ ᵥ ₓ
  // subscript number -> ₀ ₁ ₂ ₃ ₄ ₅ ₆ ₇ ₈ ₉

  double a = sqrt(9);    // √a = square root
  double b = pow(2, 4);  // a pangkat b = power
  int c = round(3.5);    // buletin ke yang paling mendekati. .4 ke bawah jadi flor, selain itu ceil
  int d = ceil(3.14);    // buletin ke atas
  int e = floor(3.89);   // buletin ke bawah
  double f = fabs(-100); // absolute value, return value is positive
  double g = log(9);
  double x = sin(45);
  double y = cos(45);
  double z = tan(45);

  printf("%lf", y);
  // printf("%d", e);

  return 0;
}