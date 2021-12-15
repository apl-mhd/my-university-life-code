package com.example.reaz.cheackbox;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

 private    CheckBox check1, check2, check3;
  private   Button button;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        setOnButtonClick();
    }


    public void setOnButtonClick(){

        check1 =(CheckBox)findViewById(R.id.checkBox);
        check2 =(CheckBox)findViewById(R.id.checkBox2);
        check3 =(CheckBox)findViewById(R.id.checkBox3);
        button =(Button)findViewById(R.id.button);

        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                StringBuffer str = new StringBuffer();
                str.append("Dog ").append(check1.isChecked()+"\n");
                str.append("Cat ").append(check1.isChecked()+"\n");
                str.append("Cow ").append(check1.isChecked()+"\n");

                Toast.makeText(MainActivity.this, str, Toast.LENGTH_SHORT).show();
            }
        });


    }

}