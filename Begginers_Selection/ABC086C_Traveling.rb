N = gets.chomp.to_i
box_i = [[0, 0, 0]]
box_i.push(*(1..N).to_a.map{|n| gets.chomp.split.map(&:to_i)})
judge = 'Yes'


box_i.inject([0, 0, 0]) do |result, a|
  t = (a[0] - result[0])
  x = (a[1] - result[1]).abs
  y = (a[2] - result[2]).abs
  if t >= x + y
    if t.odd?
      if (x + y).even?
        judge = 'No'
        break
      end
    else
      if (x + y).odd?
        judge = 'No'
        break
      end
    end
  else
    judge = 'No'
    break
  end
  result = a
end

puts judge