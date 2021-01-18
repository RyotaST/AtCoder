x = gets.chomp.to_i
a = gets.chomp.split.map(&:to_i)
time = 0
a = a.map {|n| {num: time += 1, value: n}}
box = []

if x == 1
  (a[0][:value] > a[1][:value]) ? (puts a[1][:num]) : (puts a[0][:num])
else
  (x-1).times do |b|
    box = []
    0.step(2**(x-b)-2, 2) do |c|
        (a[c][:value] > a[c+1][:value]) ? (box.push(a[c])) : (box.push(a[c+1]))
    end
    a = box
  end
  (box[0][:value] > box[1][:value]) ? (puts box[1][:num]) : (puts box[0][:num])
end