package com.example.solarisapp;

import androidx.appcompat.app.AppCompatActivity;

import android.media.MediaPlayer;
import android.net.Uri;
import android.os.Bundle;
import android.widget.Button;
import android.widget.VideoView;

public class MainActivity extends AppCompatActivity {

    VideoView videoView;
    Button bt1,bt2,bt3;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        bt1 = findViewById(R.id.SolarWind);
        bt2 = findViewById(R.id.SolarParker);
        bt3 = findViewById(R.id.Solarlive);

        videoView = findViewById(R.id.videoHome);

        String path = "android.resources://com.example.solarisapp/" + R.raw.videohome;
        Uri uri = Uri.parse(path);

        videoView.setVideoURI(uri);
        videoView.start();

        videoView.setOnPreparedListener(new MediaPlayer.OnPreparedListener() {
            @Override
            public void onPrepared(MediaPlayer mp) {
                mp.setLooping(true);
            }
        });

    }

    @Override
    protected void onResume() {
        videoView.resume();
        super.onResume();
    }

    @Override
    protected void onPause() {
        videoView.suspend();
        super.onPause();
    }

    @Override
    protected void onDestroy() {
        videoView.stopPlayback();
        super.onDestroy();
    }
}