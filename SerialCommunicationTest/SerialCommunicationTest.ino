/*
 * Geekble Co. LTD.
 * 아두이노에 시리얼 통신 테스트를 위한 예제입니다.
 * <https://geekble.shop/***> <링크할당>
 * 
 * 더 재미있는 예제를 찾아보고 여러분의 멋진 아이디어를 공유해주세요!
 * <링크할당, 기획 확인>
 */

void setup()
{
	Serial.begin(9600);
  Serial.print("아두이노 시리얼통신 테스트에 오신것을 환영합니다!");
  Serial.print("\n");
  Serial.println("시리얼 통신을 이용해 아두이노로 전송한 문자열을 다시 컴퓨터로 보내는 코드입니다.");
  Serial.print("\n\nGeekble Co. LTD.\n\n\n");
}

void loop()
{
  while(Serial.available())
  {
    Serial.write(Serial.read());
  }
}
