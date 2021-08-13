import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.layout.StackPane;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;
import javafx.geometry.*;
import javafx.stage.Modality;

/**
    To add another class object in Eclipse IDE, right click on the 
    "src" folder of your project, and select "New", then click on "class" object

    Stage: The entire window
    Scene: Where the contents of the window are placed
    primaryStage: Variable we use to set the title and scene of/as well show the window

    Layout Types:
        VBox: Creates a column in which objects are stored
        StackPane: Lays out the objects in back-to-front order

 **/



public class AlertBox
{
    public static void alert()
    {
        Stage window = new Stage();
        window.initModality(Modality.APPLICATION_MODAL);
        window.setTitle("NEW WINDOW");
        window.setMinWidth(250);

        Label label2 = new Label();
        label2.setText("LABEL");

        Button bttn3 = new Button();
        bttn3.setText("BUTTON 3");
        bttn3.setOnAction(e -> window.close());

        VBox layout3 = new VBox(10);
        layout3.getChildren().addAll(label2, bttn3);
        layout3.setAlignment(Pos.CENTER);

        Scene scene3 = new Scene(layout3);
        window.setScene(scene3);
        window.showAndWait();
    }

}

public class ConfirmBox
{
    static boolean answer;

    public static boolean Confirm()
    {
        Stage window = new Stage();
        window.initModality(Modality.APPLICATION_MODAL);
        window.setTitle("NEW WINDOW");
        window.setMinWidth(250);

        Label label2 = new Label();
        label2.setText("LABEL");

        Button yes = new Button("Yes");
        Button no = new Button("No");

        yes.setOnAction(e -> 
            {   answer = true;
                window.close();
            }
        );
        
        
        no.setOnAction(e -> 
            {
                answer = false;
                window.close();
            }
        );

        VBox layout3 = new VBox(10);
        layout3.getChildren().addAll(label2, yes, no);
        layout3.setAlignment(Pos.CENTER);

        Scene scene3 = new Scene(layout3);
        window.setScene(scene3);
        window.showAndWait();
        
        return answer;

    }

}



public class Main extends Application implements EventHandler<ActionEvent>
{
    //Define the window variable, and all scenes to follow
    Stage window;
    Scene scene1, scene2;

    //Define any contents to add to the scenes
    Button bttn = new Button();
    Button bttn2 = new Button();
    
    public static void main(String args[])
    {
        //Launch the main application 
        launch(args);        
    }

    //Set the stage of the window
    @Override 
        
        public void start(Stage primaryStage) throws Exception
        {
            //Define our stage variable and set the window title
            window = primaryStage;
            window.setTitle("RB GUI");

            StackPane layout1 = new StackPane();
            
            bttn.setText("CLICK ME");
            bttn.setOnAction(e -> AlertBox.alert());

            //Define and show the main scene
            layout1.getChildren().add(bttn);
            
            scene1 = new Scene(layout1, 300, 500);
            
            window.setScene(scene1);
            window.show();

        }
   

}

