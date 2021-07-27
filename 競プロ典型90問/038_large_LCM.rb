A,B=gets.split.map(&:to_i)
(A > B) ? (large=A;small=B) : (large=B;small=A)
rem = 10**19
while rem > 0
  rem = large.rationalize % small.rationalize
  if rem == 0
    rem = small
    break
  else
    large = small
    small = rem
  end
end
result = A.rationalize * B.rationalize / rem.rationalize
puts result > 10**18 ? "Large" : result.to_i