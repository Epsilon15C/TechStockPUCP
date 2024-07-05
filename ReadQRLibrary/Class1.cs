
using System;
using System.Drawing;
using System.IO;
using OpenCvSharp;
using ZXing;
using ZXing.Common;

namespace ReadQRLibrary
{
    public class QRCodeHelper
    {
        private static VideoCapture _capture;
        private static BarcodeReader _reader = new BarcodeReader();

        /*public QRCodeHelper()
        {
            _reader = new BarcodeReader();
        }*/
        

        public static int VideoCaptureFunction(int cameraIndex)
        {
            using (var cap = new VideoCapture(cameraIndex))
            {
                return cap.IsOpened() ? 1 : 0;
            }
        }


        public static void InitializeCamera(int cameraIndex)
        {
            _capture = new VideoCapture(cameraIndex);
        }

        public static Bitmap CaptureFrame()
        {
            if (_capture == null || !_capture.IsOpened())
                return null;

            using (var frame = new Mat())
            {
                _capture.Read(frame);
                if (frame.Empty())
                    return null;

                return MatToBitmap(frame);
            }
        }

        public static string ReadQRCode(Bitmap bitmap)
        {
            if (bitmap == null)
                return null;

            var result = _reader.Decode(bitmap);
            return result?.Text;
        }

        public static Bitmap GenerateQRCode(string text, int width = 250, int height = 250)
        {
            var writer = new BarcodeWriter
            {
                Format = BarcodeFormat.QR_CODE,
                Options = new EncodingOptions
                {
                    Width = width,
                    Height = height
                }
            };
            return writer.Write(text);
        }

        private static Bitmap MatToBitmap(Mat mat)
        {
            using (var ms = new MemoryStream())
            {
                mat.WriteToStream(ms, ".bmp");
                return new Bitmap(ms);
            }
        }
    }
}