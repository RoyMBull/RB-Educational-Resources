import javafx.application.Application;  
import javafx.scene.Scene;  
import javafx.scene.control.*;  
import javafx.scene.layout.BorderPane;  
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.stage.Stage; 


public class Main extends Application implements EventHandler<ActionEvent>
{
    //Define the contentes of the window here for global use
    Button bttn = new Button();

    public static void main(String args[])
    {
        //Launch the main application 
        launch(args);        
    }

    //Set the stage of the window
    @Override 
        
        public void start(Stage mainwin) throws Exception
        {
            //Define the MainWindow title
            mainwin.setTitle("RB GUI Main");

            //Set the layout and scene of the MainWindow
            BorderPane layout = new BorderPane();
            Scene scene = new Scene(layout, 400, 400); //Sets the dimensions of the window, width & Length
            
            //Add Contents
            
            // ... next to new menu item indicates a new window will open
            // > next to a menu item indicates a tree list
            // Nothing next to a menu item indicates it's a singular option
            
            //Create the Menu bar
            MenuBar menbar = new MenuBar();
            
            	//Add Menu Options
            	Menu menu = new Menu("File");
            	
            		//Add items to those options
            		            		            		
            		//Sample 1: Addes basic menu title
            		menu.getItems().add(new MenuItem("New..."));
            		menu.getItems().add(new SeparatorMenuItem());
            		menu.getItems().add(new MenuItem("New"));
            		
            		//Sample 2: Adds menu item that responds on click
            		MenuItem newfile = new MenuItem("Nnn");
            		newfile.setOnAction(e -> System.out.println("He"));
            		menu.getItems().add(newfile);
            		
            		//Sample 3:
            		
            //Add Menu to the bar and set it to the borderpane
            menbar.getMenus().add(menu);
            layout.setTop(menbar);

            //Show the window
            mainwin.setScene(scene);
            mainwin.show();

        }
    
}
