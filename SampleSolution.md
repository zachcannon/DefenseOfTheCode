#Sample Solution
##Phase 1
###Code Snippet
<pre><code>class Soldier {
  ..
  public void applyDoubleBuff() {
    calculatedAttackDamage = attackDamage * 2;
    calculatedArmorDefense = armorDefense * 2;
    calculatedShield = shield * 2;
    calculatedSpeed = speed * 2;
  }
  
  public void applyTripleBuff() {
    calculatedAttackDamage = attackDamage * 3;
    calculatedArmorDefense = armorDefense * 3;
    calculatedShield = shield * 3;
    calculatedSpeed = speed * 3;
  }
  ..
}
</code></pre>
###Short Answer
'applyDoubleBuff' and 'applyTripleBuff' methods are very similar and is considered to have the 'duplicated code' code smell. The only difference is the multiplier of the buff. I used a combination of both the 'add parameter' and 'extract method' refactoring techniques to remove the duplicate code.

###Refactored Code
This is just to give y'all an idea of better code and the refactoring technique applied.

<pre><code>class Soldier {
  ..
  public void applyDoubleBuff() {
    applyBuff(2);
  }
  
  public void applyTripleBuff() {
    applyBuff(3);
  }
  
  private void applyBuff(int multiplier) {
    calculatedAttackDamage = attackDamage * multiplier;
    calculatedArmorDefense = armorDefense * multiplier;
    calculatedShield = shield * multiplier;
    calculatedSpeed = speed * multiplier;
  }
  ..
}
</code></pre>
