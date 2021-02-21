A, B, C = gets.split.map(&:to_i)
if A == B
  puts C == 0 ? "Takahashi" : "Aoki"
else
  puts A > B ? "Takahashi" : "Aoki"
end